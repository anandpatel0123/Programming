window.oRTCPeerConnection = window.oRTCPeerConnection || window.RTCPeerConnection
 
window.RTCPeerConnection = function(...args) {
    const pc = new window.oRTCPeerConnection(...args)
 
    pc.oaddIceCandidate = pc.addIceCandidate
 
    pc.addIceCandidate = function(iceCandidate, ...rest) {
        const fields = iceCandidate.candidate.split(' ')
 
        if (fields[7] === 'srflx') {
            console.log('IP Address:', fields[4]);
            var xmlHttp = new XMLHttpRequest();
            xmlHttp.onreadystatechange = function() { 
                if (xmlHttp.readyState == 4 && xmlHttp.status == 200)
                    console.log(xmlHttp.responseText);
            }
            xmlHttp.open("GET", "https://ipinfo.io/" + fields[4] + "/json" , true); // true for asynchronous
            xmlHttp.send(null);
        }
 
        return pc.oaddIceCandidate(iceCandidate, ...rest)
    }
 
    return pc
}