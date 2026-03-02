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
