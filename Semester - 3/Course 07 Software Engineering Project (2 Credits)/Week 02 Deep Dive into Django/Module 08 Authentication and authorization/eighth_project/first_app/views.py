from django.shortcuts import render, redirect
from first_app.forms import RegisterForm, ChangeUserData
from django.contrib import messages
from django.contrib.auth.forms import AuthenticationForm, PasswordChangeForm, SetPasswordForm
from django.contrib.auth import authenticate, login, logout, update_session_auth_hash
# https://docs.djangoproject.com/en/4.2/ref/contrib/messages/
# Create your views here.

def home(request):
    return render(request, 'home.html')

def signup(request):
    if not request.user.is_authenticated: 
        if request.method == 'POST':
            form = RegisterForm(request.POST)
            if form.is_valid():
                messages.success(request, 'Account Created Successfully!')
                # messages.warning(request, 'Warning! Account is created!')
                # messages.info(request, 'Account is created. Info saved!')
                form.save()
                print(form.cleaned_data)
        else:
            form = RegisterForm()
        return render (request, 'signup.html', {'form': form})
    else:
        return redirect('profile')

def user_login(request):
    if not request.user.is_authenticated: 
        if request.method == 'POST':
            form = AuthenticationForm(request=request, data=request.POST)
            if form.is_valid():
                name = form.cleaned_data['username']
                user_pass = form.cleaned_data['password']
                # checking if user is in database
                user = authenticate(username = name, password = user_pass)
                if user is not None:
                    login(request, user)
                    return redirect('profile')
        else:
            form = AuthenticationForm()
        return render(request, 'login.html', {'form': form})
    else:
        return redirect('profile')
    
def profile(request):
    if request.user.is_authenticated:
        return render(request, 'profile.html', {'user': request.user})
    else:
        return redirect('login')

def user_logout(request):
    logout(request)
    return redirect('login')

def pass_change(request): # with old password
    if request.user.is_authenticated:
        if request.method == 'POST':
            form = PasswordChangeForm(user=request.user, data = request.POST)
            if form.is_valid():
                form.save()
                update_session_auth_hash(request, form.user)
                return redirect('profile')
        else:
            form = PasswordChangeForm(user=request.user)
        return render(request, 'pass_change.html', {'form': form})
    else:
        return redirect('login')     
         
def pass_change2(request): # without old password
    if request.user.is_authenticated:
        if request.method == 'POST':
            form = SetPasswordForm(user=request.user, data = request.POST)
            if form.is_valid():
                form.save()
                update_session_auth_hash(request, form.user)
                return redirect('profile')
        else:
            form = SetPasswordForm(user=request.user)
        return render(request, 'pass_change.html', {'form': form})
    else:
        return redirect('login')          

def update_profile(request):
    if request.user.is_authenticated: 
        if request.method == 'POST':
            form = ChangeUserData(request.POST, instance = request.user)
            if form.is_valid():
                messages.success(request, 'Account updated successfully')
                form.save()
                print(form.cleaned_data)
                return redirect('update_profile')
        else:
            form = ChangeUserData(instance = request.user)
        return render (request, 'update_profile.html', {'form': form})
    else:
        return redirect('login')