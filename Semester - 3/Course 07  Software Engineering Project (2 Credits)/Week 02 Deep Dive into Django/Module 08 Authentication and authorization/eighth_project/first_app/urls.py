from django.urls import path
from first_app.views import home
urlpatterns = [
    path('', home, name="homepage"),
]
