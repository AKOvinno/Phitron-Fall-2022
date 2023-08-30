from django.urls import path, include
from rest_framework.routers import DefaultRouter
from api.views import BookViewSet

# Create a router and register our viewsets with it.
router = DefaultRouter()
router.register(r'books', BookViewSet, basename="book")
# router.register(r'users', views.UserViewSet,basename="user")

# The API URLs are now determined automatically by the router.
urlpatterns = [
    # Method - 1
    # path('books/', BookListView.as_view()), # handling get and post request
    # path('books/<int:pk>/', BookListUpdateDelete.as_view()), 
    
    # Method - 2
    # path('books/', BookListCreateAPIView.as_view()), # handling get and post request
    # path('books/<int:pk>/', BookRetrieveUpdateDestroyAPIView.as_view()), 
    
    # Method - 3
    path('', include(router.urls))
    
]