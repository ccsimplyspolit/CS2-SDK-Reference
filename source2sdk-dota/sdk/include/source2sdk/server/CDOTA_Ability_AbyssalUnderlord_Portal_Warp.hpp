#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
        // Size: 0x598
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_AbyssalUnderlord_Portal_Warp : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x580            
            float m_flChannelTime; // 0x584            
            // m_hSpawnUnderlingThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSpawnUnderlingThinker;
            char m_hSpawnUnderlingThinker[0x4]; // 0x588            
            // m_hWarrior has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hWarrior;
            char m_hWarrior[0x4]; // 0x58c            
            // m_hArcher has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hArcher;
            char m_hArcher[0x4]; // 0x590            
            uint8_t _pad0594[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_AbyssalUnderlord_Portal_Warp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_AbyssalUnderlord_Portal_Warp) == 0x598);
    };
};
