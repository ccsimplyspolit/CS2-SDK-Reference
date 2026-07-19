#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7c8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelPassthroughFakeWall : public source2sdk::server::CBaseModelEntity
        {
        public:
            bool m_bAllowAnyone; // 0x780            
            bool m_bAllowTinyCharacters; // 0x781            
            uint8_t _pad0782[0x2]; // 0x782
            float m_flTriggerDistanceMeters; // 0x784            
            // m_hTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTrigger;
            char m_hTrigger[0x4]; // 0x788            
            uint8_t _pad078c[0x4]; // 0x78c
            source2sdk::entity2::CEntityIOOutput m_eventOnOpen; // 0x790            
            source2sdk::entity2::CEntityIOOutput m_eventOnClose; // 0x7a8            
            uint8_t _pad07c0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPassthroughFakeWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelPassthroughFakeWall) == 0x7c8);
    };
};
