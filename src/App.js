import './App.scss';
import { BrowserRouter, Routes, Route } from 'react-router-dom';
import Admin from './component/Admin/Admin';
import User from './component/User/User';
import Home from './component/Home/Home';

const App = () => {

  return (
    <BrowserRouter>
      <Routes>
        <Route path='/' element={<Home />} >
          <Route path='admins' element={<Admin />} />
          <Route path='users' element={<User />} />
        </Route>
      </Routes>
    </BrowserRouter>
  );
}

export default App;
