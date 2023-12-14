(function(){

    // seleccionamos todos los sliders gracias a la clase testimony_body, los ... es para obtener un array

    const sliders = [...document.querySelectorAll('.testimony_body')];

    // seleccionamos las flechas gracias a su id

    const buttonNext = document.querySelector('#next');

    const buttonBefore = document.querySelector('#before');

    let value;



    //Creamos un evento para el buttonNext

    //Cada vez que se haga click se llamará a la función changePosition con un argumento de 1

    buttonNext.addEventListener('click', ()=>{

        changePosition(1);

    });



    //Creamos un evento para el buttonBefore

    //Cada vez que se haga click se llamará a la función changePosition con un argumento -1

    buttonBefore.addEventListener('click', ()=>{

        changePosition(-1);

    });



    const changePosition = (add)=>{

        //En esta constante tendremos el slider actual del elemento que tenga la clase testimony__body--show 

        //que era la clase que daba visibilida al slider. Obtendremos su dataset.id (a cada slider le dimos valor 1, 2, 3...)

        const currentTestimony = document.querySelector('.testimony_body-show').dataset.id;

        //Hacemos un casting de cadena de texto a number

        value = Number(currentTestimony);

        value += add;

        

        //Eliminamos la clase testimony__body--show de la diapositiva que lo tuviera

        sliders[Number(currentTestimony)-1].classList.remove('testimony_body-show');



        //controlamos si queremos ir más allá de los sliders que tenemos

        if(value === sliders.length+1 || value === 0){

             //si estamos en el primero y pulsamos < pasará al último slider

            value = value === 0 ? sliders.length  : 1;

           

        }



        //Queremos acceder al slider de la posición value - 1, obtenemos sus classes y le agregamos la clase

        //testimony__body--show para que se muestre, antes debemos eliminar la clase del slide que lo tuviera

        sliders[value-1].classList.add('testimony_body-show');



    }



})();