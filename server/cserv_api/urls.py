from django.urls import path
from . import views

urlpatterns = [
    path('number/', views.number, name='number'),
    path('primes/', views.primes, name='primes'),
]
