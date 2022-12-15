import './App.scss';
import Header from './component/Header/Header';
import { Outlet, Link } from "react-router-dom";


const App = () => {

  return (
    <div className="app-container">
      <div id="header-container">
        <Header />
      </div>
      <div id="main-contain">
        <div id="sidenav-container">

        </div>
        <div id="app-content">
          <Outlet />
        </div>
      </div>
    </div>

  );
}

export default App;
