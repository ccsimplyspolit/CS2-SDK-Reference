#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd98
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_nModelIndex"
        // static metadata: MNetworkIncludeByName "m_lifeState"
        // static metadata: MNetworkVarNames "Vector m_poolOrigin"
        // static metadata: MNetworkVarNames "float32 m_waterLevel"
        // static metadata: MNetworkVarNames "float32 m_x"
        // static metadata: MNetworkVarNames "float32 m_y"
        // static metadata: MNetworkVarNames "float32 m_z"
        // static metadata: MNetworkVarNames "float32 m_angle"
        #pragma pack(push, 1)
        class C_Fish : public source2sdk::client::CBaseAnimGraph
        {
        public:
            // metadata: MNotSaved
            Vector m_pos; // 0xca8            
            // metadata: MNotSaved
            Vector m_vel; // 0xcb4            
            // metadata: MNotSaved
            QAngle m_angles; // 0xcc0            
            // metadata: MNotSaved
            std::int32_t m_localLifeState; // 0xccc            
            // metadata: MNotSaved
            float m_deathDepth; // 0xcd0            
            // metadata: MNotSaved
            float m_deathAngle; // 0xcd4            
            // metadata: MNotSaved
            float m_buoyancy; // 0xcd8            
            uint8_t _pad0cdc[0x4]; // 0xcdc
            // metadata: MNotSaved
            source2sdk::client::CountdownTimer m_wiggleTimer; // 0xce0            
            // metadata: MNotSaved
            float m_wigglePhase; // 0xcf8            
            // metadata: MNotSaved
            float m_wiggleRate; // 0xcfc            
            // metadata: MNotSaved
            Vector m_actualPos; // 0xd00            
            // metadata: MNotSaved
            QAngle m_actualAngles; // 0xd0c            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNotSaved
            Vector m_poolOrigin; // 0xd18            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_waterLevel; // 0xd24            
            // metadata: MNotSaved
            bool m_gotUpdate; // 0xd28            
            uint8_t _pad0d29[0x3]; // 0xd29
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "fish_pos_x"
            // metadata: MNetworkChangeCallback "OnPosChanged"
            // metadata: MNotSaved
            float m_x; // 0xd2c            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "fish_pos_y"
            // metadata: MNetworkChangeCallback "OnPosChanged"
            // metadata: MNotSaved
            float m_y; // 0xd30            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "fish_pos_z"
            // metadata: MNetworkChangeCallback "OnPosChanged"
            // metadata: MNotSaved
            float m_z; // 0xd34            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "angle_normalize_positive"
            // metadata: MNetworkBitCount "7"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "360,000000"
            // metadata: MNetworkEncodeFlags "1"
            // metadata: MNetworkChangeCallback "OnAngChanged"
            // metadata: MNotSaved
            float m_angle; // 0xd38            
            // metadata: MNotSaved
            float m_errorHistory[20]; // 0xd3c            
            // metadata: MNotSaved
            std::int32_t m_errorHistoryIndex; // 0xd8c            
            // metadata: MNotSaved
            std::int32_t m_errorHistoryCount; // 0xd90            
            // metadata: MNotSaved
            float m_averageError; // 0xd94            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Fish because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Fish) == 0xd98);
    };
};
