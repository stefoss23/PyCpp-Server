from django.shortcuts import render
from django.http import HttpResponse
import json
from pycserv import *

def number(request):
    return HttpResponse(func())
    
def primes(request):        
    try:
       num = int(request.GET.get('num'))
       return HttpResponse(json.dumps(get_primes(num)))
    except:
       return HttpResponse(None)
       
def sfault(request):
    print("--- Segfault request")
    segfault();
    return HttpResponse(None)
    
def ex1(request):
    print("--- Exceptiom request 1")
    raise Exception("Python exception called")
    return HttpResponse(None)
    
def ex2(request):
    print("--- Exceptiom request 2")
    raise Exception("CPP exception called")
    return HttpResponse(None)
