from rest_framework import permissions

# This is overall permission
class AdminOrReadOnly(permissions.IsAdminUser):
    def has_permission(self, request, view):
        if request.method in permissions.SAFE_METHODS: # get request
            return True
        else: # put, delete, post
            bool(request.user and request.user.is_staff)
            
# This is object permission
class ReviewerOrReadOnly(permissions.BasePermission):
    def has_object_permission(self, request, view, obj):
        if request.method in permissions.SAFE_METHODS: # get request
            return True
        else:
            return obj.user == request.user
        