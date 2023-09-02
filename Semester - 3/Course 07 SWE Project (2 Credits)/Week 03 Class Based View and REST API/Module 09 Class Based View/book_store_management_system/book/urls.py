from django.urls import path
from book.views import HomeTemplateView, BookListView, BookDetailsView, BookFormView, BookUpdateView, DeleteBookView

urlpatterns = [
    path('', HomeTemplateView.as_view(), name='homepage'),
    #path('<int:roll>/', HomeTemplateView.as_view(), {'founder': 'Laila'}, name='homepage'),
    #path('store_new_book/', store_book, name='store_book'),
    path('store_new_book/', BookFormView.as_view(), name='store_book'),
    #path('show_books/', show_book, name='show_book'),
    path('show_books/', BookListView.as_view(), name='show_book'),
    path('book_details/<int:pk>', BookDetailsView.as_view(), name='book_details'),
    #path('edit_books/<int:id>', edit_book, name='edit_book'),
    path('edit_books/<int:pk>', BookUpdateView.as_view(), name='edit_book'),
    #path('delete_book/<int:id>', delete_book, name='delete_book'),
    path('delete_book/<int:pk>', DeleteBookView.as_view(), name='delete_book'),
]

