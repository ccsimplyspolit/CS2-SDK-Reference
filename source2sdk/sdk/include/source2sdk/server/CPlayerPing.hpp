#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerPawn;
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
        // Size: 0x4d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CPlayerPing : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04a8[0x8]; // 0x4a8
            // m_hPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_hPlayer;
            char m_hPlayer[0x4]; // 0x4b0            
            // m_hPingedEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPingedEntity;
            char m_hPingedEntity[0x4]; // 0x4b4            
            std::int32_t m_iType; // 0x4b8            
            bool m_bUrgent; // 0x4bc            
            char m_szPlaceName[18]; // 0x4bd            
            uint8_t _pad04cf[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayerPing because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlayerPing) == 0x4d0);
    };
};
