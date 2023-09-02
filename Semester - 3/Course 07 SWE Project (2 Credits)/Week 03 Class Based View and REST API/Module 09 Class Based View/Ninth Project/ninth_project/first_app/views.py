from django.shortcuts import render
from datetime import datetime, timedelta
from django.http import HttpResponse
# Create your views here.

def home(request):
    response = render(request, 'home.html')
    #response.set_cookie('name', 'Ovinno', max_age=10)# cookie will be deleted in 3 minutes
    response.set_cookie('name', 'Ovinno', expires=datetime.utcnow()+timedelta(days=7))
    return response

def get_cookie(request):
    name = request.COOKIES.get('name')
    return render(request, 'get_cookie.html', {'name': name})

def delete_cookie(request):
    response = render(request, 'delete_cookie.html')
    response.delete_cookie('name')
    return response

# Django Session
# Session VS Cookie

def set_session(request):
    data = {
        'name' : 'Ovinno',
        'age' : 25,
        'language' : 'English'
    }
    # print(request.session.get_session_cookie_age())
    # print(request.session.get_expiry_date())
    request.session.update(data)
    request.session['name'] = 'Karim'
    return render(request, 'home.html')

def get_session(request):
    # data = request.session
    if 'name' in request.session:
        name = request.session.get('name', 'Guest')
        age = request.session.get('age')
        language = request.session.get('language')
        
        request.session.modified = True # will get 10 sec for reload
        
        return render(request, 'get_session.html', {'name': name, 'age': age, 'language': language})
    else:
        return HttpResponse("<h1> Session Expired </h1>")

def delete_session(request):
    # del request.session['name']
    # del request.session['age']
    # del request.session['language']
    #request.session.clear()
    request.session.flush()
    return render(request, 'delete_session.html')