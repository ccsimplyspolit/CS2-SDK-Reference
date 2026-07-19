#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CFishPool;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xa70
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CFish : public source2sdk::server::CBaseAnimGraph
        {
        public:
            // m_pool has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CFishPool> m_pool;
            char m_pool[0x4]; // 0x960            
            std::uint32_t m_id; // 0x964            
            // metadata: MNotSaved
            float m_x; // 0x968            
            // metadata: MNotSaved
            float m_y; // 0x96c            
            // metadata: MNotSaved
            float m_z; // 0x970            
            float m_angle; // 0x974            
            float m_angleChange; // 0x978            
            Vector m_forward; // 0x97c            
            Vector m_perp; // 0x988            
            VectorWS m_poolOrigin; // 0x994            
            float m_waterLevel; // 0x9a0            
            float m_speed; // 0x9a4            
            float m_desiredSpeed; // 0x9a8            
            float m_calmSpeed; // 0x9ac            
            float m_panicSpeed; // 0x9b0            
            float m_avoidRange; // 0x9b4            
            // metadata: MNotSaved
            source2sdk::server::CountdownTimer m_turnTimer; // 0x9b8            
            bool m_turnClockwise; // 0x9d0            
            uint8_t _pad09d1[0x7]; // 0x9d1
            // metadata: MNotSaved
            source2sdk::server::CountdownTimer m_goTimer; // 0x9d8            
            // metadata: MNotSaved
            source2sdk::server::CountdownTimer m_moveTimer; // 0x9f0            
            // metadata: MNotSaved
            source2sdk::server::CountdownTimer m_panicTimer; // 0xa08            
            // metadata: MNotSaved
            source2sdk::server::CountdownTimer m_disperseTimer; // 0xa20            
            // metadata: MNotSaved
            source2sdk::server::CountdownTimer m_proximityTimer; // 0xa38            
            // metadata: MNotSaved
            // m_visible has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CFish*> m_visible;
            char m_visible[0x18]; // 0xa50            
            uint8_t _pad0a68[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFish because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFish) == 0xa70);
    };
};
