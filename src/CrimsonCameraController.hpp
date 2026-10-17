#pragma once
#include "Core/Core.hpp"

void CameraCtrlInitDetour();
void CameraSwitchInitDetour();
void CameraWallCheckDetour();
namespace CrimsonCameraController{
	/// Draws the camera debug info (room, camera index, fixed cam state, wall hit value) with ImGui.
	void DrawCameraDebugInfo();
	extern uint32 g_currentCameraIndex;
	extern uint32 g_currentCameraType;
	enum CAMERA_UPDATE_TYPE {
		ON_FIXED,
		ON_THIRD_PERSON,
		FIXED_TO_THIRD_PERSON,
		THIRD_PERSON_TO_FIXED
	};
};