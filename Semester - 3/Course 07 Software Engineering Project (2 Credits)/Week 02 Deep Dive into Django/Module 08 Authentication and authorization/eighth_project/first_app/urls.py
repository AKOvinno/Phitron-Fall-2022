from django.urls import path
from first_app.views import signup, home, profile, user_login, user_logout, pass_change, pass_change2, update_profile
urlpatterns = [
    path('', home, name="home"),
    path('signup/', signup, name="signup"),
    path('profile/', profile, name="profile"),
    path('login/', user_login, name="login"),
    path('logout/', user_logout, name="logout"),
    path('pass_change/', pass_change, name="pass_change"),
    path('pass_change2/', pass_change2, name="pass_change2"),
    path('update_profile/', update_profile, name="update_profile"),
]
