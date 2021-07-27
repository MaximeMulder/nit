enum Color
    kwcase Red
    kwcase Blue
    kwcase Green

    redef fun to_s
    do
        if self == Color::::Red then
            return "Red"
        else if self == Color::::Green then
            return "Green"
        else
            return "Blue"
        end
    end
end

print "hello world"

print Color::::Red

var blue = Color::::Blue

print Color::::Green
