from django.contrib import admin
from accounts.models import UserBankAccount, UserAddress
# Register your models here.
admin.site.register(UserBankAccount)
admin.site.register(UserAddress)