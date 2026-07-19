#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a78
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Beastmaster_Hawk_Perch_Flight : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t perch_flight_height; // 0x1a58            
            std::int32_t perch_tree_height; // 0x1a5c            
            std::int32_t flight_speed; // 0x1a60            
            float m_flZDelta; // 0x1a64            
            VectorWS m_vStart; // 0x1a68            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a74            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Beastmaster_Hawk_Perch_Flight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Beastmaster_Hawk_Perch_Flight) == 0x1a78);
    };
};
