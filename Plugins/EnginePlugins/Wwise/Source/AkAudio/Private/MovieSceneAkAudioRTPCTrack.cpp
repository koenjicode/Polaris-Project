#include "MovieSceneAkAudioRTPCTrack.h"

#include "Evaluation/MovieSceneEvalTemplate.h"

UMovieSceneAkAudioRTPCTrack::UMovieSceneAkAudioRTPCTrack() {
}

FMovieSceneEvalTemplatePtr UMovieSceneAkAudioRTPCTrack::CreateTemplateForSection(
	const UMovieSceneSection& InSection) const
{
	return FMovieSceneEvalTemplatePtr();
}


