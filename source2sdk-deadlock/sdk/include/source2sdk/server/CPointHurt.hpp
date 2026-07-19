#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/server/CPointEntity.hpp"
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
        // Size: 0x4c0
        // Has VTable
        #pragma pack(push, 1)
        class CPointHurt : public source2sdk::server::CPointEntity
        {
        public:
            std::int32_t m_nDamage; // 0x4a0            
            source2sdk::client::DamageTypes_t m_bitsDamageType; // 0x4a4            
            float m_flRadius; // 0x4a8            
            float m_flDelay; // 0x4ac            
            CUtlSymbolLarge m_strTarget; // 0x4b0            
            // m_pActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_pActivator;
            char m_pActivator[0x4]; // 0x4b8            
            uint8_t _pad04bc[0x4];
            
            // Datamap fields:
            // void CPointHurtHurtThink; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputToggle; // 0x0
            // void InputHurt; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointHurt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointHurt) == 0x4c0);
    };
};
