from django.shortcuts import render, redirect
from book.forms import BookStoreForm
from book.models import BookStoreModel
from django.views.generic import TemplateView, ListView, DetailView
from django.views.generic.edit import FormView, CreateView, UpdateView, DeleteView
from django.urls import reverse_lazy
from django.http import HttpResponse
# Create your views here.

# function based view
# def home(request):
#     return render(request, 'base.html')

# class based view
class HomeTemplateView(TemplateView):
    template_name = 'home.html'
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context = {'name': 'Ashfaq Kadir Ovinno', 'age': 25}
        print(kwargs)
        context.update(kwargs)
        return context


# def store_book(request):
#     if request.method == 'POST':
#         book = BookStoreForm(request.POST)
#         if book.is_valid():
#             book.save()
#             print(book.cleaned_data)
#             return redirect('show_book')
            
#     else:
#         book = BookStoreForm()
#     return render(request, 'store_book.html', {'form' : book})

# class BookFormView(FormView):
#     template_name = 'store_book.html'
#     form_class = BookStoreForm
#     success_url = reverse_lazy('show_book')
#     def form_valid(self, form):
#         form.save()
#         return redirect('show_book')
    
class BookFormView(CreateView):
    model = BookStoreModel
    template_name = 'store_book.html'
    form_class = BookStoreForm
    success_url = reverse_lazy('show_book')


# def show_book(request):
#     book = BookStoreModel.objects.all()
#     return render(request, 'show_book.html', {'data': book})
class BookListView(ListView):
    # here model is a builtin variable
    model = BookStoreModel
    template_name = 'show_book.html'
    context_object_name = 'book_list'
    
    # def get_queryset(self):
    #     return BookStoreModel.objects.filter(id = '1')
    
    # def get_context_data(self, **kwargs):
    #     context = super().get_context_data(**kwargs)
    #     context = {'Humayun': BookStoreModel.objects.filter(author='Humayun Ahmed')}
    #     return context
    
    # def get_context_data(self, **kwargs):
    #     context = super().get_context_data(**kwargs)
    #     context = {'Humayun': BookStoreModel.objects.all().order_by('author')}
    #     return context
    
    ordering = ['-id']
    
    # Creating separate view for separate users
    # def get_template_names(self): # It will override template
    #     if self.request.user.is_superuser:
    #         template_name = 'superuser.html'
    #     elif self.request.user.is_staff:
    #         template_name = 'staffuser.html'
    #     else:
    #         template_name = self.template_name
    #     return [template_name]

class BookDetailsView(DetailView):
    model = BookStoreModel
    template_name = 'book_details.html'
    context_object_name = 'item'
    pk_url_kwarg = 'pk'
    

# def edit_book(request, id):
#     book = BookStoreModel.objects.get(pk = id)
#     form = BookStoreForm(instance=book)
#     if request.method == 'POST':
#         form = BookStoreForm(request.POST, instance=book)
#         if form.is_valid():
#             form.save()
#             return redirect('show_book')
#     return render(request, 'edit_book.html', {'form': form})

class BookUpdateView(UpdateView):
    model = BookStoreModel
    template_name = 'edit_book.html'
    form_class = BookStoreForm
    pk_url_kwarg = 'pk'
    success_url = reverse_lazy('show_book')

# def delete_book(request, id):
#     book = BookStoreModel.objects.get(pk = id).delete()
#     return redirect('show_book')

class DeleteBookView(DeleteView):
    model = BookStoreModel
    template_name = 'delete_confirm.html'
    success_url = reverse_lazy('show_book')

