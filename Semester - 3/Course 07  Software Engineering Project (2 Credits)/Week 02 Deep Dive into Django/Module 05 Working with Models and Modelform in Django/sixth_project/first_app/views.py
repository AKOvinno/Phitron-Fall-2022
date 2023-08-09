from django.shortcuts import render, redirect # after deletion url will now show the page and it will automatically redirect to previous page
from . import models # first importing data from models

# Create your views here.
def home(request):
    student = models.Student.objects.all() # all will give a list of all
    print(student)
    return render(request, "home.html", {'data': student})

def delete_student(request, roll):
    models.Student.objects.get(pk = roll).delete()
    return redirect("homepage")
    # student = models.Student.objects.all()
    # std = models.Student.objects.get(pk = roll).delete()
    # print(std) It will just show the data on terminal 
    # return render(request, "home.html", {'data': student})