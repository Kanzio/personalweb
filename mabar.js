const box = document.querySelector('.box');
const question = document.querySelector('.question');
const yesBtn = document.querySelector('.mau');
const noBtn = document.querySelector('.ga');

const boxRect = box.getBoundingClientRect();
const noBtnRect = noBtn.getBoundingClientRect();

yesBtn.addEventListener('click', () => {
    question.innerHTML = "Lets goooooo";
});

noBtn.addEventListener('click', () => {
    const i = Math.floor(Math.random() * (boxRect.width - noBtnRect.width)) + 1;
    const j = Math.floor(Math.random() * (boxRect.height - noBtnRect.height)) + 1;

    noBtn.style.left = i + 'px';
    noBtn.style.top = j + 'px';
});