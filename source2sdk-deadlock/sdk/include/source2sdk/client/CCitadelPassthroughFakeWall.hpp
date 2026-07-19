#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9f0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelPassthroughFakeWall : public source2sdk::client::C_BaseModelEntity
        {
        public:
            bool m_bAllowAnyone; // 0x9a8            
            bool m_bAllowTinyCharacters; // 0x9a9            
            uint8_t _pad09aa[0x2]; // 0x9aa
            float m_flTriggerDistanceMeters; // 0x9ac            
            // m_hTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTrigger;
            char m_hTrigger[0x4]; // 0x9b0            
            uint8_t _pad09b4[0x4]; // 0x9b4
            source2sdk::entity2::CEntityIOOutput m_eventOnOpen; // 0x9b8            
            source2sdk::entity2::CEntityIOOutput m_eventOnClose; // 0x9d0            
            uint8_t _pad09e8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPassthroughFakeWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelPassthroughFakeWall) == 0x9f0);
    };
};
