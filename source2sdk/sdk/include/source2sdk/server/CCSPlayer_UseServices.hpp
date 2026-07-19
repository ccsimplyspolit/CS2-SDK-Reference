#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPlayer_UseServices.hpp"
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
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x58
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayer_UseServices : public source2sdk::server::CPlayer_UseServices
        {
        public:
            // m_hLastKnownUseEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastKnownUseEntity;
            char m_hLastKnownUseEntity[0x4]; // 0x48            
            source2sdk::entity2::GameTime_t m_flLastUseTimeStamp; // 0x4c            
            source2sdk::entity2::GameTime_t m_flTimeLastUsedWindow; // 0x50            
            uint8_t _pad0054[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_UseServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayer_UseServices) == 0x58);
    };
};
