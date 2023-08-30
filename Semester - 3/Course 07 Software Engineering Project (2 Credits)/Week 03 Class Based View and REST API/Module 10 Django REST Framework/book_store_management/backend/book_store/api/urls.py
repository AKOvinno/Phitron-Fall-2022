from django.urls import path, include
from rest_framework.routers import DefaultRouter
from api.views import BookListView, BookListUpdateDelete

# Create a router and register our viewsets with it.
router = DefaultRouter()
router.register(r'books', BookListView, basename="book")
# router.register(r'users', views.UserViewSet,basename="user")

# The API URLs are now determined automatically by the router.
urlpatterns = [
    path('books/', BookListView.as_view()), # handling get and post request
    path('books/<int:pk>/', BookListUpdateDelete.as_view()), 
]