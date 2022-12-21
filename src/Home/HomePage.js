import videoHomePage from '../../src/assets/video-homepage.mp4'
const HomePage = () => {
    return (
        <div className="homepage-container">
            <video width="100%" autoPlay muted loop>
                <source
                    src={videoHomePage}
                    type="video/mp4" />
            </video>
            <div className="homepage-content">
                <div className='text-title'>There's a better way to ask</div>
                <div className='text-description'>You don't want to make a boring form.
                    And your audience won't answer one.
                    Create a typeform instead—and make everyone happy.</div>
                <div>
                    <button className='btn-click'>Get's started - it's free</button>
                </div>
            </div>
        </div>
    )
}
export default HomePage;