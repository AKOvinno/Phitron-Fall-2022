from django.shortcuts import render, redirect
from book.forms import BookStoreForm
from book.models import BookStoreModel
from django.views.generic import TemplateView
# Create your views here.

# function based view
# def home(request):
#     return render(request, 'base.html')

# class based view


def store_book(request):
    if request.method == 'POST':
        book = BookStoreForm(request.POST)
        if book.is_valid():
            book.save()
            print(book.cleaned_data)
            return redirect('show_book')
            
    else:
        book = BookStoreForm()
    return render(request, 'store_book.html', {'form' : book})

def show_book(request):
    book = BookStoreModel.objects.all()
    return render(request, 'show_book.html', {'data': book})

def edit_book(request, id):
    book = BookStoreModel.objects.get(pk = id)
    form = BookStoreForm(instance=book)
    if request.method == 'POST':
        form = BookStoreForm(request.POST, instance=book)
        if form.is_valid():
            form.save()
            return redirect('show_book')
    return render(request, 'edit_book.html', {'form': form})

def delete_book(request, id):
    book = BookStoreModel.objects.get(pk = id).delete()
    return redirect('show_book')

