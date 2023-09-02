from django.urls import path 
from first_app.views import home, get_session, delete_cookie, set_session, get_cookie, delete_session
urlpatterns = [
    path('', home, name='homepage'),
    path('set_session/', set_session, name='set_session'),
    path('get_cookie/', get_cookie, name='get_cookie'),
    path('get_session/', get_session, name='get_session'),
    path('delete_cookie/', delete_cookie, name='delete_cookie'),
    path('delete_session/', delete_session, name='delete_session'),  
]
