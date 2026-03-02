from machine import Pin
import time

LED = Pin(15, Pin.OUT)

seg_a = Pin(4, Pin.OUT)
seg_b = Pin(5, Pin.OUT)
seg_c = Pin(6, Pin.OUT)
seg_d = Pin(7, Pin.OUT)
seg_e = Pin(8, Pin.OUT)
seg_f = Pin(9, Pin.OUT)
seg_g = Pin(10, Pin.OUT)


def display_0():
    seg_a.value(0)
    seg_b.value(0)
    seg_c.value(0)
    seg_d.value(0)
    seg_e.value(0)
    seg_f.value(0)
    seg_g.value(1)

def display_1():
    seg_a.value(1)
    seg_b.value(0)
    seg_c.value(0)
    seg_d.value(1)
    seg_e.value(1)
    seg_f.value(1)
    seg_g.value(1)

print("Auto Running Q = A̅ + B")

while True:
    
    for A in [0, 1]:
        for B in [0, 1]:
            
            Q = (not A) or B
            
            LED.value(Q)

            if Q == 0:
                display_0()
            else:
                display_1()

            print("A =", A, " B =", B, " Q =", int(Q))
            
            time.sleep(2)
