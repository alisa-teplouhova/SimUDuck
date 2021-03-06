#pragma once
#include "IObserver.h"
#include "WeatherData.h"
#include <vector>

class CMockPrioritizedObserver : public IObserver<CWeatherData>
{
public:
	CMockPrioritizedObserver(CWeatherData & weatherData, int priority, std::shared_ptr<std::vector<int>> updateQueue)
		: m_weatherData(weatherData)
		, m_priority(priority)
		, m_updateQueue(updateQueue)
	{
		m_weatherData.RegisterObserver(*this, priority);
	}

private:
	void Update(CWeatherData const& data) override
	{
		m_updateQueue->push_back(m_priority);
	}

	CWeatherData & m_weatherData;
	std::shared_ptr<std::vector<int>> m_updateQueue;
	int m_priority;
};