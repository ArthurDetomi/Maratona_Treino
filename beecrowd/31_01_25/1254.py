import re

def is_valid(text = ""):
  return text[-1] == ">"

import re

def subs_tags_in_text(original_tag = "", subs_tag = "", text = ""):
    novo_texto = ""
    i = 0
    while i < len(text):
        c = text[i]
        
        if c == "<":
            sub_trecho = "<"
            i += 1
            
            while i < len(text):
                sub_trecho += text[i]
                
                if text[i] in ["<", ">"]:
                    break
                
                i += 1

            if is_valid(sub_trecho):
                sub_trecho = re.sub(original_tag, subs_tag, sub_trecho, flags=re.IGNORECASE)
            
            novo_texto += sub_trecho
        else:
            novo_texto += c
        
        i += 1 
    
    return novo_texto

        
         
    


while True:
  try:    
    original_tag = input()
    subs_tag = input()
    text = input()
    
    text_converted = subs_tags_in_text(original_tag, subs_tag, text)
    
    print(text_converted)
  except EOFError:
    break
  