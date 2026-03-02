from django.shortcuts import render
from django.http import HttpResponse
import json
from .cserv_python import *

def number(request):
    return HttpResponse("Simple request called.")
    
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
    ex()
    return HttpResponse(None)
    
def memloss(request):
    print("--- Mem-loss request")
    mem_loss();
    return HttpResponse(None)    
