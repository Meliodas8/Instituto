(function(){

    //Seleccionamos los sliders gracias a testimony_body
    
    const sliders = [...document.querySelectorAll('.testimony_body')];
    
    //Seleccionamos las flechas gracias a su id
    
    const buttonNext = document.querySelector('#next');
    
    const buttonBefore = document.querySelector('#before');

    let value;
    
    //Creamos para manejar eventos en el boton next
    
    buttonNext.addEventListener('click', ()=>{

        changePosition(1);

    });

    //Creamos para manejar eventos en el boton before
    
    buttonBefore.addEventListener('click', ()=>{

        changePosition(-1);

    });

    const changePosition = (add)=>{

        const currentTestimony = document.querySelector('.testimony_body-show').dataset.id;

        value = Number(currentTestimony);

        value += add;

        sliders[Number(currentTestimony)-1].classList.remove('testimony_body-show');

        if(value === sliders.length+1 || value === 0){

            value = value === 0 ? sliders.length  : 1;

        }

        sliders[value-1].classList.add('testimony_body-show');

    }

})();
