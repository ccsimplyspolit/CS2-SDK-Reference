#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Broodmother_WebWalk : public source2sdk::client::CDOTA_Buff
        {
        public:
            float snare_radius; // 0x1a58            
            float snare_duration; // 0x1a5c            
            VectorWS m_vLastPosition; // 0x1a60            
            // m_hLastThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastThinker;
            char m_hLastThinker[0x4]; // 0x1a6c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Broodmother_WebWalk because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Broodmother_WebWalk) == 0x1a70);
    };
};
