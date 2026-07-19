#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CFish;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x500
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFishPool : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04a8[0x10]; // 0x4a8
            std::int32_t m_fishCount; // 0x4b8            
            float m_maxRange; // 0x4bc            
            float m_swimDepth; // 0x4c0            
            float m_waterLevel; // 0x4c4            
            bool m_isDormant; // 0x4c8            
            uint8_t _pad04c9[0x7]; // 0x4c9
            // m_fishes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CFish>> m_fishes;
            char m_fishes[0x18]; // 0x4d0            
            // metadata: MNotSaved
            source2sdk::server::CountdownTimer m_visTimer; // 0x4e8            
            
            // Datamap fields:
            // float max_range; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFishPool because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFishPool) == 0x500);
    };
};
