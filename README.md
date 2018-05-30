# arduino-etch-n-sketch
A drawing board application that allows users to sketch live in the browser using two potentiometers, an Arduino board, JavaScript, HTML, CSS and Socket.io.
# MovieFindrr - A single-page application built using React, Redux, Webpack, Express and Node.js.

![](https://media.giphy.com/media/3oEhmEeSyHQq0aiugo/giphy.gif)

Live recording: http://g.recordit.co/mhvCgtGYEZ.gif

## Homepage view 
![Homepage View](/srdocuments/homepage_view.png)

## Search view 
![Search View](/documents/search_view.png)

## Details view 
![Details View](/documents/details_view.png)

## Favorites view 
![Favorites View](/documents/favorites_view.png)

## Mobile view
![Mobile View](/documents/mobile_view.png)

## Tablet view 
![Tablet View](/documents/tablet_view.png)

## Installation
```
yarn install
```
Installs all needed dependencies

## Running on your local environment
```
yarn run dev
```
Starts the Webpack dev server

## Building the app for production
```
yarn run build
```

## Webpack performance plugin
A Webpack config will throw a warning if any chunk exceed 300kB, which is a size that may impact page performance:
```javascript
performance: {
  maxAssetSize: 300000,
  maxEntrypointSize: 300000,
  hints: 'warning'
}
```
![Webpack](/documents/bundle_analyzer.png)

## Stack
The movie data and posters come from the OMDB API. Below is a list of technologies used in the building of this app:

### Frontend
+ [React 16.4](https://facebook.github.io/react/)
+ [React Router 4](https://reacttraining.com/react-router/)
+ [Redux](http://redux.js.org/)
+ [Redux Thunk](https://github.com/gaearon/redux-thunk)
+ [Webpack 3](https://webpack.js.org/)
+ [Workbox](https://workboxjs.org/)
+ [Materialize CSS](http://materializecss.com/)
+ [PostCSS](http://postcss.org/)
+ [SASS](http://sass-lang.com/)

### Backend
+ [NodeJS](https://nodejs.org/)
+ [Express JS](https://expressjs.com/)
