from django.shortcuts import render

from . forms import contactForm, StudentData, passwordValidationProject

# Create your views here.
def home(request):
    return render(request, './first_app/home.html')

def about(request):
    if request.method == 'POST':
        name = request.POST.get('username')
        email = request.POST.get('email')
        select = request.POST.get('select')
        return render(request, './first_app/about.html', {'name' : name, 'email' : email, 'select' : select})
    else:
        return render(request, './first_app/about.html')

def submit_form(request):
    return render(request, './first_app/form.html')

def DjangoForm(request):
    if request.method == 'POST':
        form = contactForm(request.POST, request.FILES) # request.POST give form values
        if form.is_valid():
            # file = form.cleaned_data['file']
            # with open('./first_app/upload/' + file.name, 'wb+') as destination:
            #     for chunk in file.chunks(): # chunks is smaller version of file
            #         destination.write(chunk)
            print(form.cleaned_data) # here cleaned_data will show values
            #return render(request, './first_app/django_form.html', {'form':form})
    else:
        form = contactForm()
    return render(request, './first_app/django_form.html', {'form':form}) 

# cleaning an validating from data
def StudentForm(request):
    if request.method == 'POST':
        form = StudentData(request.POST, request.FILES)
        if form.is_valid():
            print(form.cleaned_data)
    else:
        form = StudentData()
    return render(request, './first_app/django_form.html', {'form':form})
 
def PasswordValidation(request):
    if request.method == 'POST':
        form = passwordValidationProject(request.POST)
        if form.is_valid():
            print(form.cleaned_data)
    else:
        form = passwordValidationProject()
    return render(request, './first_app/django_form.html', {'form':form}) 
    
