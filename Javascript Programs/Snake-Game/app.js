
let canvas = document.getElementById('canvas');
let context = canvas.getContext('2d');
let applePositionX = 15;
let applePositionY = 10;
let tiles = 20;
let snakePositionX = 12;
let snakePositionY = 12;
let snakeTail = 4;
let xVelocity = 0;
let yVelocity = 0;
let speed = 8;
let snakePositions = [];
let score = 0;
let dontFollowThisKeyCode = '';

function drawCanvas() {
    // Change Direction with respect to axis
    snakePositionX += xVelocity;
    snakePositionY += yVelocity;
    
    // If snake eats itself
    if (xVelocity !== 0 || yVelocity !== 0) {
        for(const {x, y} of snakePositions) {
            if (x === snakePositionX && y === snakePositionY) {
                document.getElementById('gameOver').style.display = 'block';
                document.removeEventListener('keyup', changeDirection);
                snakePositionX = 12;
                snakePositionY = 12;
                snakeTail = 4;
                xVelocity = 0;
                yVelocity = 0;
                snakePositions = [];
                score = 0;
            }
        }
    }

    // For corners
    if (snakePositionX < 0) {
        snakePositionX = tiles - 1;
    } else if (snakePositionX > tiles - 1) {
        snakePositionX = 0;
    } else if (snakePositionY > tiles - 1) {
        snakePositionY = 0;
    } else if (snakePositionY < 0) {
        snakePositionY = tiles - 1;
    }

    // If snake eat apple
    if (snakePositionX === applePositionX && snakePositionY === applePositionY) {
        snakeTail++;
        score++;
        applePositionX = Math.floor(Math.random() * tiles);
        applePositionY = Math.floor(Math.random() * tiles);
        document.getElementsByTagName('span')[0].innerText = score;
    }


    // Record Snake Position
    snakePositions.push({
        x: snakePositionX,
        y: snakePositionY
    })
    
    // Draw background on canvas
    context.fillStyle = '#000';
    context.fillRect(0, 0 , canvas.width, canvas.height);

    // Draw apple on canvas
    context.fillStyle = '#ff0000';
    context.fillRect(applePositionX * tiles, applePositionY * tiles, tiles -2, tiles - 2);

    // Draw snake on canvas
    for(const {x, y} of snakePositions) {
        context.fillStyle = '#e2e22f';
        context.fillRect(x * tiles, y * tiles, tiles -2, tiles - 2);
    }

    // Remove old tail of snake
    while(snakePositions.length > snakeTail) {
        snakePositions.shift();
    }
}

setInterval(() => {
    drawCanvas();
}, 1000 / speed);

document.addEventListener('keyup', changeDirection)

function changeDirection({keyCode}) {
    if (keyCode !== dontFollowThisKeyCode) {
        switch (keyCode) {
            case 38:
                yVelocity = -1;
                xVelocity = 0;
                dontFollowThisKeyCode = 40;
                break;
            case 39:
                xVelocity = 1;
                yVelocity = 0;
                dontFollowThisKeyCode = 37;
                break;
                case 37:
                xVelocity = -1;
                yVelocity = 0;
                dontFollowThisKeyCode = 39;
                break;
            case 40:
                yVelocity = 1;
                xVelocity = 0;
                dontFollowThisKeyCode = 38;
                break;
            default:
                console.log('no key match');
        }
    }
}