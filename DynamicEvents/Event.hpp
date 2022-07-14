#pragma once

#include <cstdint>
#include <memory>

class Event
{
public:
    typedef Event*(*getMessageId)(void);
    virtual ~Event() = default;

    virtual std::uint32_t getMessageId() const = 0;
    virtual std::unique_ptr<Event> clone() const  = 0;
};
