from django.urls import path
from book.views import home, store_book, show_book, edit_book, delete_book

urlpatterns = [
    path('', home, name='homepage'),
    path('store_new_book/', store_book, name='store_book'),
    path('show_books/', show_book, name='show_book'),
    path('edit_books/<int:id>', edit_book, name='edit_book'),
    path('delete_book/<int:id>', delete_book, name='delete_book'),
]
