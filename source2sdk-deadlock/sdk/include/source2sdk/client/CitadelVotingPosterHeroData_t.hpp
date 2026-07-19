#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"

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
        // Standard-layout class: true
        // Size: 0x1e8
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelVotingPosterHeroData_t
        {
        public:
            source2sdk::client::HeroID_t m_HeroID; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // m_strPosterImage has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase>> m_strPosterImage;
            char m_strPosterImage[0xe0]; // 0x8            
            // m_strPosterImageDamaged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase>> m_strPosterImageDamaged;
            char m_strPosterImageDamaged[0xe0]; // 0xe8            
            CPanoramaImageName m_strPosterImageThumbnail; // 0x1c8            
            CSoundEventName m_strDamagedSound; // 0x1d8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelVotingPosterHeroData_t, m_HeroID) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelVotingPosterHeroData_t, m_strPosterImage) == 0x8);
        static_assert(offsetof(source2sdk::client::CitadelVotingPosterHeroData_t, m_strPosterImageDamaged) == 0xe8);
        static_assert(offsetof(source2sdk::client::CitadelVotingPosterHeroData_t, m_strPosterImageThumbnail) == 0x1c8);
        static_assert(offsetof(source2sdk::client::CitadelVotingPosterHeroData_t, m_strDamagedSound) == 0x1d8);
        
        static_assert(sizeof(source2sdk::client::CitadelVotingPosterHeroData_t) == 0x1e8);
    };
};
