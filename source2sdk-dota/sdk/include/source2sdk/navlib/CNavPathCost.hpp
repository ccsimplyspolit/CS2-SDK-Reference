#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/navlib/INavPathCost.hpp"

// /////////////////////////////////////////////////////////////
// Module: navlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace navlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x30
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNavPathCost : public source2sdk::navlib::INavPathCost
        {
        public:
            bool m_bAllowLadders; // 0x10            
            bool m_bCanFly; // 0x11            
            bool m_bCanSwim; // 0x12            
            uint8_t _pad0013[0x1]; // 0x13
            float m_flWaterToGroundMaxHeight; // 0x14            
            float m_flGroundToWaterMaxHeight; // 0x18            
            float m_flGroundToWaterTransitionDistance; // 0x1c            
            float m_flWaterToGroundTransitionDistance; // 0x20            
            float m_flFlyingTransitionTolerance; // 0x24            
            bool m_bOptimizeFlySpacePathfinds; // 0x28            
            bool m_bStringPullFlySpacePathfinds; // 0x29            
            bool m_bSupportsTransitions; // 0x2a            
            uint8_t _pad002b[0x1]; // 0x2b
            float m_flTransitionPenalty; // 0x2c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavPathCost because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::navlib::CNavPathCost) == 0x30);
    };
};
