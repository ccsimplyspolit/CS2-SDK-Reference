#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/ENeutralTrooperType.hpp"

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
        // Size: 0x60
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_NeutralCampVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            // metadata: MPropertyStartGroup "Gameplay"
            std::int32_t m_iInitialSpawnDelayInSeconds; // 0x28            
            std::int32_t m_iSpawnIntervalInSeconds; // 0x2c            
            std::int32_t m_iSpawnIntervalChange; // 0x30            
            std::int32_t m_iSpawnIntervalMin; // 0x34            
            source2sdk::client::ENeutralTrooperType m_eNeutralType; // 0x38            
            uint8_t _pad003c[0x4]; // 0x3c
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_sIdleAmbient; // 0x40            
            CSoundEventName m_sAlertAmbient; // 0x50            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_NeutralCampVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_NeutralCampVData) == 0x60);
    };
};
