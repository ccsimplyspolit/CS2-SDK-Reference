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
        // Size: 0x1270
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_Fish : public source2sdk::client::CBaseAnimGraph
        {
        public:
            // metadata: MNotSaved
            VectorWS m_pos; // 0x1180            
            // metadata: MNotSaved
            Vector m_vel; // 0x118c            
            // metadata: MNotSaved
            QAngle m_angles; // 0x1198            
            // metadata: MNotSaved
            std::int32_t m_localLifeState; // 0x11a4            
            // metadata: MNotSaved
            float m_deathDepth; // 0x11a8            
            // metadata: MNotSaved
            float m_deathAngle; // 0x11ac            
            // metadata: MNotSaved
            float m_buoyancy; // 0x11b0            
            uint8_t _pad11b4[0x4]; // 0x11b4
            // metadata: MNotSaved
            source2sdk::client::CountdownTimer m_wiggleTimer; // 0x11b8            
            // metadata: MNotSaved
            float m_wigglePhase; // 0x11d0            
            // metadata: MNotSaved
            float m_wiggleRate; // 0x11d4            
            // metadata: MNotSaved
            VectorWS m_actualPos; // 0x11d8            
            // metadata: MNotSaved
            QAngle m_actualAngles; // 0x11e4            
            // metadata: MNotSaved
            VectorWS m_poolOrigin; // 0x11f0            
            // metadata: MNotSaved
            float m_waterLevel; // 0x11fc            
            // metadata: MNotSaved
            bool m_gotUpdate; // 0x1200            
            uint8_t _pad1201[0x3]; // 0x1201
            // metadata: MNotSaved
            float m_x; // 0x1204            
            // metadata: MNotSaved
            float m_y; // 0x1208            
            // metadata: MNotSaved
            float m_z; // 0x120c            
            // metadata: MNotSaved
            float m_angle; // 0x1210            
            // metadata: MNotSaved
            float m_errorHistory[20]; // 0x1214            
            // metadata: MNotSaved
            std::int32_t m_errorHistoryIndex; // 0x1264            
            // metadata: MNotSaved
            std::int32_t m_errorHistoryCount; // 0x1268            
            // metadata: MNotSaved
            float m_averageError; // 0x126c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Fish because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Fish) == 0x1270);
    };
};
