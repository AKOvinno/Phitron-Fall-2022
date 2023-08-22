from django.urls import path
#from book.views import home, store_book, show_book, edit_book, delete_book
from . import views
urlpatterns = [
    path('', views.TemplateView.as_view(template_name='home.html'), name='homepage'),
    path('store_new_book/', views.store_book, name='store_book'),
    path('show_books/', views.show_book, name='show_book'),
    path('edit_books/<int:id>', views.edit_book, name='edit_book'),
    path('delete_book/<int:id>', views.delete_book, name='delete_book'),
]
