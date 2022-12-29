// tên là xios này chỉ là để tượng trưng thôi, bản chất nó chính là thằng
// instance được export Default bên thư mục ultils bên dưới
import axios from '../ultils/axiosCustomize';

const postCreatNewUser = (email, password, username, role, image) => {
    //call API
    const data = new FormData();
    data.append('email', email);
    data.append('password', password);
    data.append('username', username);
    data.append('role', role);
    data.append('userImage', image);
    // Ban đầu là như này nhưng mà sau đó dùng customize của axios bên file axiosCustomize
    // nên đã sửa đường link như này sau chỉ cần sửa ở 1 nơi thôi
    // return axios.post('http://localhost:8081/api/v1/participant', data)
    return axios.post('api/v1/participant', data)
}
export { postCreatNewUser }