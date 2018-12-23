#pragma once

class ITimer
{
public:
	virtual void start() = 0;
	virtual void stop() = 0;
	virtual void reset() = 0;
	virtual void enable_autoreload() = 0;
	virtual bool is_expired() = 0;
	virtual u32 durationTicks() = 0;
};
