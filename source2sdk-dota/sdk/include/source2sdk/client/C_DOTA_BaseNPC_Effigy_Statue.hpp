#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Building.hpp"
#include "source2sdk/client/EEvent.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x1a60
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_Effigy_Statue : public source2sdk::client::C_DOTA_BaseNPC_Building
        {
        public:
            // m_hEffigyParticleDef has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hEffigyParticleDef;
            char m_hEffigyParticleDef[0x8]; // 0x1a28
            source2sdk::client::EEvent m_eEffigyEvent; // 0x1a30
            std::int32_t m_nEffigyLevel; // 0x1a34
            uint8_t _pad1a38[0x24]; // 0x1a38
            std::int32_t m_nQuality; // 0x1a5c
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in C_DOTA_BaseNPC_Effigy_Statue because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Effigy_Statue) == 0x1a60);
    };
};
