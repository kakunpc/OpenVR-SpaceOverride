// SPDX-License-Identifier: AGPL-3.0-only

#pragma once

#include <string>
#include <vector>

#include <openvr.h>

struct VRDevice
{
	int id = -1;
	vr::TrackedDeviceClass deviceClass;
	std::string model = "";
	std::string serial = "";
	std::string trackingSystem = "";
	vr::ETrackedControllerRole controllerRole = vr::TrackedControllerRole_Invalid;
};

struct VRState
{
	std::vector<std::string> trackingSystems;
	std::vector<VRDevice> devices;
};

class UserInterface
{
public:
	void Render(bool runningInOverlay);
};
